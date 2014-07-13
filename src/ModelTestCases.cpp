#include "gtest/gtest.h"
#include "BL/Model.h"
#include "BL/Operations/AddOperation.h"

class ModelTestCases: public ::testing::Test {
protected:
	Model _model;
};

TEST_F(ModelTestCases, testAddTwoPositives){
	_model.setValue1(1);
	_model.setValue2(2);
	_model.setCurrentOperation(AddOperation::Name);
	ASSERT_DOUBLE_EQ(3, _model.calculate());
}
