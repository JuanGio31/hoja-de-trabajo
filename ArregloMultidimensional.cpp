#include <iostream>

using namespace std;

void ingresar_notas(int notas[4][3])
{
    int numero_de_estudiante = 0;
    while (numero_de_estudiante < 4)
    {
        int numero_de_examen = 0;
        while (numero_de_examen < 3)
        {
            int nota_curso = 0;
            cout << "Estudiante " << (numero_de_estudiante + 1) << endl;
            cout << "Ingrese la nota del examen " << (numero_de_examen + 1) << ": ";
            cin >> notas[numero_de_estudiante][numero_de_examen];
            numero_de_examen++;
        }
        cout << endl;
        numero_de_estudiante++;
    }
}

void calcular_promedio(int notas[4][3])
{
    cout << endl;
    for (size_t i = 0; i < 4; i++)
    {
        double nota_promedio = 0;
        for (size_t j = 0; j < 3; j++)
        {
            nota_promedio += notas[i][j];
        }
        cout << "Promedio estudiante " << (i + 1) << ": " << nota_promedio / 3 << endl;
    }
}

int main()
{
    int notas[4][3];
    ingresar_notas(notas);
    calcular_promedio(notas);
    cout << endl
         << "Fin." << endl
         << endl;
    return 0;
}

/*
¿Cual es la complejidad del acceso a un elemento específico de la matriz?

    Es una complejidad de O(1), porque los elementos de la matriz 
    se almacenan uno tras otro en la memoria, por eso mismo las 
    matrices ofrecen acceso en tiempo constante a los elementos 
    mediante su índice. 
*/