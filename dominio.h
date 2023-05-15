#ifndef DOMINIO_H
#define DOMINIO_H

#include <string>

class Usuario {
private:
    std::string nome;
    int idade;
    std::string email;
    std::string matricula;
    std::string senha;
    std::string telefone;

public:
    std::string getNome() const;
    int getIdade() const;
    std::string getEmail() const;
    std::string getMatricula() const;
    std::string getSenha() const;
    std::string getTelefone() const;

    void setNome(const std::string& novoNome);
    void setIdade(int novaIdade);
    void setEmail(const std::string& novoEmail);
    void setMatricula(const std::string& novaMatricula);
    void setSenha(const std::string& novaSenha);
    void setTelefone(const std::string& novoTelefone);
};

#endif

