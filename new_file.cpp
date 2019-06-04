#include "gmock/gmock.h"
#include "CBasicMath.hpp"

using ::testing::_;
using ::testing::AtLeast;
using ::testing::Invoke;

class MockBasicTest : public CBasicMath
{
public:
    MOCK_METHOD2(Addition, int(int x, int y));
    MOCK_METHOD2(Multiply, int(int x, int y));
    MOCK_METHOD2(Divide, int(int x, int y));
    MOCK_METHOD2(OnlyForExample, int(int a, int b));
};

class MockClassSpecificTest : public AbstractClassSpecificTest
{
public:
    MOCK_METHOD2(SpecificTest, int(int a, int b));
};