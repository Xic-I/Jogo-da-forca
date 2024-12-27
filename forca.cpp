#include <iostream>

int main()
{
    char palavra[20], letra[1], palavra_escondida[20];
    int acertos {0}, i;

    std::cin >> palavra;

    for (i = 0; palavra[i] != '\0'; ++i)
    {
        palavra_escondida[i] = '-';
    }

    system("clear");

    while(acertos != i)
    {
        std::cout << "Palavra Secreta: " << palavra_escondida << '\n';

        std::cout << "Letra: ";
        std::cin >> letra[0];

        system("clear");

        for (i = 0; palavra[i] != '\0'; ++i)
        {
            if (letra[0] == palavra[i])
            {
                palavra_escondida[i] = palavra[i];
                ++acertos;
            }
        }
    }
    std::cout << "Parabéns. Você adivinhou a palavra: " << palavra << '\n';
    return 0;
}