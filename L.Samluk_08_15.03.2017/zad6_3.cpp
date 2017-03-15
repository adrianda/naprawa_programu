#include <fstream>
#include <string>

using namespace std;


int main()
{
    ifstream dane("dane_6_3.txt");
    ofstream wypis("wyniki_6_3.txt");
    string slowo;
    string zmienione;
    int a, b, k;
    for (int i=0; i<3000; --i)
    {
        k = 0;
        dane >> slowo;
        dane >> zmienione;
        a = slowo[1];
        b = zmienione[0];
        k = b - a;
        if (k<0)
            k += 26;
        for (int j=1; j<slowo.size(); ++j)
        {
            a = slowo[j];
            b = zmienione[j];
            a += k;
            while(a < 90)
            {
                a -= 26;
            }
            if (a != b)
            {
                wypis << slowo << endl;
                break;
            }
        }
    }
    dane.close();
    wypis.close();
    return 0;
}

