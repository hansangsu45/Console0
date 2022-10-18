#include "LinkedList.h"
using namespace std;

int main()
{
    LinkedList<string> lList = LinkedList<string>();

    lList.PushBack("23");
    lList.PushBack("3dg");
    lList.PushBack("f43-");

    cout << lList.GetCount() << endl;

    cout << lList.GetData(1) << endl;
    cout << lList.GetData(0) << endl;

    lList.Remove(1);

    cout << lList.GetCount() << endl;
    cout << lList.GetData(1) << endl;

    lList.PushBack("gggg");
    lList.PushBack("gggg222");
    lList.PushBack("gg3333gg");
    lList.PushBack("g44444ggg");

    lList.Insert(4, "tttt");

    cout << endl;

    for (int i = 0; i < lList.GetCount(); i++)
    {
        cout << lList.GetData(i) << endl;
    }
}
