#include <iostream>
using namespace std;
void* operator new(size_t size){
	void* ptr = malloc(size);
	if (ptr == nullptr)
	{
        throw bad_exception();
	}


}
void operator delete(void* ptr)noexcept {
free(ptr);
}
int main(){
int* ptr= new int(10);
delete(ptr);
}
