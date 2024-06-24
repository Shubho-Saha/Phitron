#include <bits/stdc++.h>
using namespace std;

namespace jodu
{
    int age = 25;
    string name = "jodu mia";

    void helloJodu() {
        cout<<"hello from Jodu"<<endl;
    }

    class joduClass 
    {
        public:
        string schoolname;
        int cls;

        joduClass(string schoolname, int cls) {
            this->schoolname = schoolname;
            this->cls = cls;
        }
    };

}

using namespace jodu;
int main()
{
    cout<<jodu::age<<endl;
    jodu::helloJodu();
    joduClass modu("jodu mia high school", 7);
    cout<<modu.schoolname<<" "<<modu.cls<<endl;

    return 0;
}