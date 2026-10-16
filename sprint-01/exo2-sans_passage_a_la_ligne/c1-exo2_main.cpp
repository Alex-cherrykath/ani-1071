/*Reprenez le programme précédent et retirez tous les \n.
 Compilez, lancez, et décrivez précisément ce qui change. Expliquez pourquoi l'invite
de commande se retrouve collée à votre texte, et pourquoi ce n'est pas un bug*/

#include <stdio.h>
int main() {
    printf("ESSAM MVENG ALEXANDRE CHERRY KATH");
    printf("YAOUNDE");
    return 0;
}
/*Après la compilation, on constate que l'invite de commande est collée au texte affiché,
 car il n'y a plus de saut de ligne pour séparer les deux.
  Ce n'est pas un bug c'est ce qui arrive en absence de caractère de fin de ligne.*/