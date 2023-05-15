#include <iostream>
#include "entidade.h"

int main() {
    CadastroUsuarios cadastro;

    // Cadastrar conta do desenvolvedor
    Usuario desenvolvedor1;
    desenvolvedor1.setNome("João");
    desenvolvedor1.setMatricula("12345");
    desenvolvedor1.setSenha("senha123");
    desenvolvedor1.setTelefone("987654321");

    Usuario desenvolvedor2;
    desenvolvedor2.setNome("Maria");
    desenvolvedor2.setMatricula("54321");
    desenvolvedor2.setSenha("senha456");
    desenvolvedor2.setTelefone("123456789");

    cadastro.adicionarUsuario(desenvolvedor1);
    cadastro.adicionarUsuario(desenvolvedor2);

    // Mostrar lista de usuários
    cadastro.mostrarUsuarios();

    // Remover um usuário
    cadastro.removerUsuario(desenvolvedor1);

    // Mostrar lista de usuários atualizada
    cadastro.mostrarUsuarios();

    return 0;
}
