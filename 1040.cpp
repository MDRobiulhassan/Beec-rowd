#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float n1, n2, n3, n4, avg, n5, final;
    cin >> n1 >> n2 >> n3 >> n4;

    avg = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1)) / 10;
    cout << fixed << setprecision(1);
    cout << "Media: " << avg << endl;

    if (avg >= 7.0)
        cout << "Aluno aprovado." << endl;
    else if (avg < 5)
        cout << "Aluno reprovado." << endl;
    else if (avg >= 5.0 && avg <= 6.9)
    {
        cout << "Aluno em exame." << endl;
        cin >> n5;
        cout << "Nota do exame: " << n5 << endl;
        final = (avg + n5) / 2;
        if (final >= 5.0)
            cout << "Aluno aprovado." << endl;
        else
            cout << "Aluno reprovado." << endl;

        cout << "Media final: " << final << endl;
    }

    return 0;
}