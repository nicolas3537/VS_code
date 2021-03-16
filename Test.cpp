#include <iostream>

using namespace std;
/**
 * @brief Donne la durée en seconde
 * 
 * @param heures donner l'heure
 * @param minutes donner les minutes
 * @param secondes donner les secondes
 * @return ** int 
 */
// Prototype de la fonction
int nombreDeSecondes(int heures, int minutes = 0, int secondes = 0);

// Main
int main()
{
    cout << nombreDeSecondes(1) << endl;

    return 0;
}

// Définition de la fonction
int nombreDeSecondes(int heures, int minutes, int secondes)
{
    int total = 0;

    total = heures * 60 * 60;
    total += minutes * 60;
    total += secondes;

    return total;
}