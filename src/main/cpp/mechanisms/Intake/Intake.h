#pragma once

#include<string>

//Team 302 Includes
#include <mechanisms/base/Mech1IndMotor.h>

#include <memory>


class Intake : public Mech1IndMotor
{
public:
  Intake(
  std::shared_ptr<IDragonMotorController> Intake_Controller,
  std::string controlFileName, 
  std::string networkTableName
  );
  Intake() = delete;
  ~Intake() = default;

  void Update() override;
  

};
