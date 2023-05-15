#include <iostream>
#include "entidade.h"

void CadastroUsuarios::adicionarUsuario(const Usuario& novoUsuario) {
    usuarios.push_back(novoUsuario);
}

void CadastroUsuarios::removerUsuario(const Usuario& usuarioRemovido) {
    for (auto it = usuarios.begin(); it != usuarios.end(); ++it) {
        if (it->getNome() == usuarioRemovido.getNome()) {
            usuarios.erase(it);
            break;
        }
    }
}

void CadastroUsuarios::mostrarUsuarios() const {
    for (const auto& usuario : usuarios) {
        std::cout << "Nome: " << usuario.getNome() << std::endl;
        std::cout << "Matrícula: " << usuario.getMatricula() << std::endl;
        std::cout << "Telefone: " << usuario.getTelefone() << std::endl;
        std::cout << std::endl;
    }
}
