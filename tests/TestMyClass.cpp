#include <memory>

#include "../thirdparty/googletest/googletest/include/gtest/gtest.h"
#include "../src/myclass.h"


TEST(MyClassTest, test01) {
    std::shared_ptr<MyClass> obj(new MyClass());

    int given_value = 5;
    obj->set_value(given_value);
    ASSERT_EQ(obj->get_value(), given_value);
}