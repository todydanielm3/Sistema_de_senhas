#ifndef ENTIDADE_H
#define ENTIDADE_H

#include "dominio.h"
#include <vector>

class CadastroUsuarios {
private:
    std::vector<Usuario> usuarios;

public:
    void adicionarUsuario(const Usuario& novoUsuario);
    void removerUsuario(const Usuario& usuarioRemovido);
    void mostrarUsuarios() const;
};

#endif
