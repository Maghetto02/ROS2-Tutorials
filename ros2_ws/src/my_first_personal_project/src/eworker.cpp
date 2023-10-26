#include <memory>
#include <string>
#include <chrono>
#include <functional>
#include <iostream>
#include <vector>

#include "rclcpp/rclcpp.hpp"
#include "my_first_personal_project/msg/number.hpp"

using std::placeholders::_1;

class Eworker : public rclcpp::Node
{
  public:
    Eworker()
    : Node("Eworker")
    {
      subscription_ = this->create_subscription<my_first_personal_project::msg::Number>(
      "random_number", 10, std::bind(&Eworker::topic_callback, this, _1));
      publisher_ = this->create_publisher<my_first_personal_project::msg::Number>("random_number", 10);
      timer_ = this->create_wall_timer(
      1000ms, std::bind(&Eworker::timer_callback, this));
    }

  private:
    void topic_callback(my_first_personal_project::msg::Number::SharedPtr received_num) const
    {
      auto number = my_first_personal_project::msg::Number();
      number.node_id = received_num->node_id;
      number.number = received_num->number;

      received_numbers.push_back(number);

      bool id_is_present = false;

      for(std::string id : pub_id){
          if(id.compare(number.node_id) == 0){
              id_is_present = true;
              break;
          }
      }

      if(!id_is_present)
        pub_id.push_back(number.node_id);

      std::cout << "Received:\n\tnode_id: " << received_num->node_id << "\n\tnumber: " << received_num->number << std::endl;
      
    }
    void timer_callback()
    {
      std::vector<my_first_personal_project::msg::Number> average;

      std::cout << "Publishing:\n";
      for(std::string id : pub_id){
        sum_ = 0;
        count_ = 0;
        for(my_first_personal_project::msg::Number n : received_numbers){
            if(id.compare(n.node_id) == 0){
              sum_ += n.number;
              count_++;
            }
        }
        std::cout << "\tnode_id: " << id << "\n\taverage: " << sum_ / count_ << std::endl;
      }

      //publisher_->publish(number);
    }
    rclcpp::Subscription<my_first_personal_project::msg::Number>::SharedPtr subscription_;
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<my_first_personal_project::msg::Number>::SharedPtr publisher_;
    size_t count_;
    double sum_;
    std::vector<my_first_personal_project::msg::Number> received_numbers;
    std::vector<std::string> pub_id;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<Eworker>());
  rclcpp::shutdown();
  return 0;
}