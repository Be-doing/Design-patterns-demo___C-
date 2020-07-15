#include"NumberFactory.hpp"
#include"__NSCFConstantStringFac.hpp"
#include"__NSTaggedPointerStringFac.hpp"
#include"_NSCFStringFac.hpp"
using namespace std;

int main() {

	NSNumber *num1 = NumberFactory::Init("123456");
	NSNumber *num2 = NumberFactory::Init("1234.56");
	NSNumber *num3 = NumberFactory::Init("123a56");

	num1->type();
	num2->type();
	num3->type();

	NSString *str1 = (new __NSCFConstantStringFac())->Init();
	str1->type();
	NSString *str2 = (new _NSCFStringFac())->Init();
	str2->type();
	NSString *str3 = (new __NSTaggedPointerStringFac())->Init();
	str3->type();
	system("pause");
	return 0;
}
