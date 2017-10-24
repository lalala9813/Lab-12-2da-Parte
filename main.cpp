#include <iostream>

using namespace std;

class Sayayin
{
    private:
        string nombre;

    public:
        int edad;
        int poder;

        Sayayin()
        {
            edad = 40;
            poder = 35000000;
        }
};


class Vegeta: public Sayayin
{
    public:
        string name;
        string ssj;
        Vegeta()
        {
            name = "Vegeta";
            ssj = "Dios Azul";
            poder += 145200000;
        }

    Vegeta(int edad, int poder, string name, string ssj);

};
/*EL PROGRAMA BOTARA ERROR YA QUE EN LA CALSE GOHAN ESTAMOS QUERIENDO HEREDAR DE LA CLASE MADRE SAYAYIN DE MANERA PROTEGIDA
CON UN PROTECTED LO CUAL AL QUERER HEREDAR DE ESTA FORMA NO PODREMOS ACCEDER A ESTOS DATOS YA QUE SE ENCUENTRAN PROTEGIDOS
LO MISMO SUCEDERA SI COLOCAMOS UN PRIVATE NO ACCEDERA O MEJOR DICHO NO PODRA HEREDAR NADA YA QUE LO HEREDAMOS DE FORMA PRIVADA
*/

class Gohan: protected Sayayin
{
    public:
        string name;
        string ssj;
        Gohan()
        {
            name = "Gohan";
            edad = 19;
            ssj = "Super Sayayin 2";
            poder += 800000;
        }

    Gohan(int edad, int poder, string name, string ssj);

};

int main()
{
    cout << " <SAYAYIN> \n";
    Sayayin s;
    cout << "Su edad es --> " << s.edad << "\n";
    cout << "Su poder es --> " << s.poder << "\n\n";

    cout << " <VEGETA> \n";
    Vegeta v;
    cout << "Su edad es --> " << v.edad << "\n";
    cout << "Su poder es --> " << v.poder << "\n";
    cout << "Su nombre es --> " << v.name << "\n";
    cout << "Su nivel de ssj es --> " << v.ssj << "\n\n";

    //DESCOMENTAR LO DE ABAJO PARA VER EL ERROR

    /*cout << " <GOHAN> \n";
    Gohan g;
    cout << "Su edad es --> " << g.edad << "\n";
    cout << "Su poder es --> " << g.poder << "\n";
    cout << "Su nombre es --> " << g.name << "\n";
    cout << "Su nivel de ssj es --> " << g.ssj << "\n\n";*/
    return 0;
}
