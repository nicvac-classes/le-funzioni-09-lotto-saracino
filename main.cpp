
using namespace std;

void visualizzamenu()
{
    cout << "Premere:" << endl;
    cout << "1 per estrarre i numeri" << endl;
    cout << "2 per giocare 5 numeri" << endl;
    cout << "3 per controllare la vincita" << endl;
}

void giocanumeri(int f[])
{
    int i = 0;
    int x;

    while (i < 5)
    {
        cout << "Inserisci numero: ";
        cin >> x;

        while (x > 100)
        {
            cout << "Valore non valido, reinserisci: ";
            cin >> x;
        }

        f[i] = x;
        i++;
    }
}

void estrazionenumeri(int e[])
{
    int i = 0;

    while (i < 5)
    {
        e[i] = rand() % 101;   // numeri 0–100
        i++;
    }

    cout << "Numeri estratti" << endl;
}

void controllavittoria(int v[], int f[], int e[])
{
    int i = 0;
    int r = 0;

    while (i < 5)
    {
        if (e[i] == f[i])
        {
            r = r + 1;
        }
        i++;
    }

    if (r == 1)
        cout << "1 numero indovinato" << endl;
    else if (r == 2)
        cout << "ambo" << endl;
    else if (r == 3)
        cout << "terna" << endl;
    else if (r == 4)
        cout << "quartina" << endl;
    else if (r == 5)
        cout << "cinquina" << endl;
    else
        cout << "nessun numero indovinato" << endl;
}

int main()
{
    int e[5];
    int f[5];
    int v[5];   
    int g = 1;

    srand(time(NULL));

    while (g < 0 || g > 0) 
        visualizzamenu();

        cout << "Inserisci opzione: ";
        cin >> g;

        while (g < 0 || g > 3)
        {
            cout << "Opzione non valida, reinserisci: ";
            cin >> g;
        }

        if (g == 0)
        {
            cout << "fine" << endl;
            break;
        }
        else if (g == 1)
        {
            estrazionenumeri(e);
        }
        else if (g == 2)
        {
            giocanumeri(f);
        }
        else if (g == 3)
        {
            controllavittoria(v, f, e);
        }
    }

    return 0;
}
