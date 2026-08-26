#include <stdio.h>

int main(){

    int senha, usuario;


    printf("Digite o nome de usuario que deseja: \n");
    scanf("%d", &usuario);
    printf("Digite a senha que deseja usar: \n");
    scanf("%d", &senha);

    while (usuario == senha)
    {
        printf("A senha e o nome de usuario nao podem ser iguals, digite uma nova senha: \n");
        scanf("%d", &senha);
    }
    
    printf("Nome de usuario: %d Senha: %d", usuario, senha);
}