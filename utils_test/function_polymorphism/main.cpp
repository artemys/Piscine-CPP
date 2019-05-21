#include "Sample.class.hpp"

int main(){
	Sample sampleClass;
	char const str = 'a';

	sampleClass.bar(sampleClass);
	sampleClass.bar(str);
	sampleClass.bar(1);
	sampleClass.bar(1.4f);
	return 0;
}