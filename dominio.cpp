#include "dominio.h"

std::string Usuario::getNome() const {
    return nome;
}

int Usuario::getIdade() const {
    return idade;
}

std::string Usuario::getEmail() const {
    return email;
}

std::string Usuario::getMatricula() const {
    return matricula;
}

std::string Usuario::getSenha() const {
    return senha;
}

std::string Usuario::getTelefone() const {
    return telefone;
}

void Usuario::setNome(const std::string& novoNome) {
    nome = novoNome;
}

void Usuario::setIdade(int novaIdade) {
    idade = novaIdade;
}

void Usuario::setEmail(const std::string& novoEmail) {
    email = novoEmail;
}

void Usuario::setMatricula(const std::string& novaMatricula) {
    matricula = novaMatricula;
}

void Usuario::setSenha(const std::string& novaSenha) {
    senha = novaSenha;
}

void Usuario::setTelefone(const std::string& novoTelefone) {
    telefone = novoTelefone;
}
