#include <iostream>
#include "entidade.h"

void CadastroUsuarios::adicionarUsuario(const Usuario& novoUsuario) {
    usuarios.push_back(novoUsuario);
}

void CadastroUsuarios::removerUsuario(const std::string& matricula) {
    for (auto it = usuarios.begin(); it != usuarios.end(); ++it) {
        if (it->getMatricula() == matricula) {
            usuarios.erase(it);
            break;
        }
    }
}

bool CadastroUsuarios::autenticarUsuario(const std::string& matricula, const std::string& senha) const {
    for (const auto& usuario : usuarios) {
        if (usuario.getMatricula() == matricula && usuario.getSenha() == senha) {
            return true;
        }
    }
    return false;
}

Usuario* CadastroUsuarios::buscarUsuario(const std::string& matricula) {
    for (auto& usuario : usuarios) {
        if (usuario.getMatricula() == matricula) {
            return &usuario;
        }
    }
    return nullptr;
}

const Usuario* CadastroUsuarios::buscarUsuario(const std::string& matricula) const {
    for (const auto& usuario : usuarios) {
        if (usuario.getMatricula() == matricula) {
            return &usuario;
        }
    }
    return nullptr;
}

void CadastroUsuarios::mostrarUsuarios() const {
    for (const auto& usuario : usuarios) {
        std::cout << "Nome: " << usuario.getNome() << std::endl;
        std::cout << "Matrícula: " << usuario.getMatricula() << std::endl;
        std::cout << "Senha: " << usuario.getSenha() << std::endl;
        std::cout << "Telefone: " << usuario.getTelefone() << std::endl;
        std::cout << std::endl;
    }
}

void CadastroTestes::adicionarTeste(const Teste& novoTeste) {
    testes.push_back(novoTeste);
}

void CadastroTestes::removerTeste(const std::string& codigo) {
    for (auto it = testes.begin(); it != testes.end(); ++it) {
        if (it->getCodigo() == codigo) {
            testes.erase(it);
            break;
        }
    }
}

Teste* CadastroTestes::buscarTeste(const std::string& codigo) {
    for (auto& teste : testes) {
        if (teste.getCodigo() == codigo) {
            return &teste;
        }
    }
    return nullptr;
}

const Teste* CadastroTestes::buscarTeste(const std::string& codigo) const {
    for (const auto& teste : testes) {
        if (teste.getCodigo() == codigo) {
            return &teste;
        }
    }
    return nullptr;
}

void CadastroTestes::mostrarTestes() const {
    for (const auto& teste : testes) {
        std::cout << "Código: " << teste.getCodigo() << std::endl;
        std::cout << "Descrição: " << teste.getDescricao() << std::endl;
        std::cout << std::endl;
    }
}

void CadastroCasosDeTeste::adicionarCasoDeTeste(const CasoDeTeste& novoCasoDeTeste) {
    casosDeTeste.push_back(novoCasoDeTeste);
}

void CadastroCasosDeTeste::removerCasoDeTeste(const std::string& codigo)
