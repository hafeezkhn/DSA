#include <gtest/gtest.h>
#include "DatAlgo/Math.cpp"

class test_fixture : public testing::Test{
	public:
	Math math;
};

TEST_F(test_fixture,add_func_add_two_intigers){
	
	auto result = math.add(2,4);
	ASSERT_EQ(result,6);
	
}
TEST_F(test_fixture,add_two_real_numbers){
	
	auto result = math.add(2.5,2.5);
	ASSERT_EQ(result,5.0);
}

int main(int argc, char **argv)
{
	    testing::InitGoogleTest(&argc, argv);
	        return RUN_ALL_TESTS();
}
