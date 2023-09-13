#include <stdarg.h>
#include <stdio.h>

// Notre fonction qui accepte un nombre variable d'arguments. 
// Le premier argument, 'count', spécifie combien d'autres arguments suivent.
void print_numbers(int count, ...) 
{
    // Nous déclarons une liste d'arguments de type 'va_list'.
    va_list args;

    // 'va_start' initialise notre liste d'arguments en utilisant 'args' et le dernier 
    // argument connu de la fonction, ici c'est 'count'.
    va_start(args, count);

    // Nous utilisons ensuite une boucle for pour accéder à chaque argument supplémentaire
    // qui a été passé à notre fonction.
    for (int i = 0; i < count; ++i) {
        // 'va_arg' est utilisé pour récupérer chaque argument de la liste. 
        // Il prend deux paramètres : la liste 'args' et le type de l'argument suivant. 
        // Dans notre cas, nous nous attendons à ce que ce soit un entier.
        int num = va_arg(args, int); // En appelant va_args, il récupère automatiquement l'élément suivant.

        // Nous affichons ensuite l'entier.
        printf("%d\n", num);
    }

    // Enfin, 'va_end' est utilisé pour nettoyer la mémoire que 'args' utilise.
    // Il est important d'appeler 'va_end' avant que la fonction ne se termine.
    va_end(args);
}

int main()
{
    // Nous appelons notre fonction avec cinq arguments supplémentaires.
    // 'print_numbers' affiche chacun de ces arguments sur une nouvelle ligne.
    print_numbers(5, 1, 2, 3, 4, 5);

    return 0;
}
