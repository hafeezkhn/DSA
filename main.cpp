#include <gtest/gtest.h>
#include "DatAlgo/Math.cpp"
//#include "DatAlgo/whattotest.cpp"
//TEST(test_case, example_test)
//{
//           EXPECT_EQ(2, 2);
//}
//TEST(SquareRootTest, PositiveNos) { 
//           ASSERT_EQ(6, squareRoot(36.0));
//               ASSERT_EQ(18.0, squareRoot(324.0));
//       	    ASSERT_EQ(25.4, squareRoot(645.16));
//       	        ASSERT_EQ(0, squareRoot(0.0));
//}
//
//TEST(SquareRootTest, NegativeNos) {
//           ASSERT_EQ(-1.0, squareRoot(-15.0));
//               ASSERT_EQ(-1.0, squareRoot(-0.2));
//}

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
