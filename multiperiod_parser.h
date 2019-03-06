#pragma once
#include <vector>
#include <memory>
#include <queue>



class multi_period_parser {
typedef struct period_income {
  float las;
}period_income;

 public:
  multi_period_parser();
  ~multi_period_parser();
  void parse_period();

 private:
  std::shared_ptr<std::vector<float>> income_;
  std::vector<float> last_period_x;
  std::vector<float> last_period_y;
};