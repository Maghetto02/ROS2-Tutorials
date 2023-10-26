#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include <cstdlib>  
#include <ctime>
#include <iostream> 

#include "rclcpp/rclcpp.hpp"
#include "my_first_personal_project/msg/number.hpp"

using namespace std::chrono_literals;

class Random_Publisher : public rclcpp::Node
{
  public:
    Random_Publisher()
    : Node("Random_Publisher"), count_(0)
    {
      publisher_ = this->create_publisher<my_first_personal_project::msg::Number>("random_number", 10);
      this->declare_parameter("node_id", "12345");
      this->declare_parameter("max_n", 10);
      this->declare_parameter("min_n", 1);
      timer_ = this->create_wall_timer(
      50ms, std::bind(&Random_Publisher::timer_callback, this));
    }

  private:
    void timer_callback()
    {
      auto number = my_first_personal_project::msg::Number();

      int max_n = this->get_parameter("max_n").as_int();
      int min_n = this->get_parameter("min_n").as_int();

      number.node_id = this->get_parameter("node_id").as_string();
      number.number = (rand() % max_n) + min_n;

      std::cout << "Publishing:\n\tnode_id: " << number.node_id << "\n\tnumber: " << number.number << std::endl;

      publisher_->publish(number);
    }
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<my_first_personal_project::msg::Number>::SharedPtr publisher_;
    size_t count_;
};

int main(int argc, char * argv[])
{
  srand((unsigned)time(NULL));
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<Random_Publisher>());
  rclcpp::shutdown();
  return 0;
}