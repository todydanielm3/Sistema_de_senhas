
In file included from main.cpp:2:
./entidade.h:25:17: error: use of undeclared identifier 'Teste'
    std::vector<Teste> testes;
                ^
./entidade.h:28:31: error: unknown type name 'Teste'
    void adicionarTeste(const Teste& novoTeste);
                              ^
./entidade.h:31:5: error: unknown type name 'Teste'
    Teste* buscarTeste(const std::string& codigo);
    ^
./entidade.h:32:11: error: unknown type name 'Teste'
    const Teste* buscarTeste(const std::string& codigo) const;
          ^
./entidade.h:39:17: error: use of undeclared identifier 'CasoDeTeste'
    std::vector<CasoDeTeste> casosDeTeste;
                ^
./entidade.h:42:37: error: unknown type name 'CasoDeTeste'
    void adicionarCasoDeTeste(const CasoDeTeste& novoCasoDeTeste);
                                    ^
./entidade.h:45:5: error: unknown type name 'CasoDeTeste'
    CasoDeTeste* buscarCasoDeTeste(const std::string& codigo);
    ^
./entidade.h:46:11: error: unknown type name 'CasoDeTeste'
    const CasoDeTeste* buscarCasoDeTeste(const std::string& codigo) const;
          ^
main.cpp:57:9: error: unknown type name 'Teste'
        Teste novoTeste;
        ^
main.cpp:79:9: error: unknown type name 'Teste'
        Teste* testeEditar = cadastroTestes.buscarTeste(codigoEditar);
        ^
main.cpp:104:15: error: unknown type name 'Teste'
        const Teste* testeVisualizar = cadastroTestes.buscarTeste(codigoTesteVisualizar);
              ^
main.cpp:117:9: error: unknown type name 'Teste'
        Teste* testeCadastrarCaso = cadastroTestes.buscarTeste(codigoTesteCadastrarCaso);
        ^
main.cpp:119:13: error: unknown type name 'CasoDeTeste'
            CasoDeTeste novoCasoDeTeste;
            ^
13 errors generated.
In file included from entidade.cpp:1:
./entidade.h:25:17: error: use of undeclared identifier 'Teste'
    std::vector<Teste> testes;
                ^
./entidade.h:28:31: error: unknown type name 'Teste'
    void adicionarTeste(const Teste& novoTeste);
                              ^
./entidade.h:31:5: error: unknown type name 'Teste'
    Teste* buscarTeste(const std::string& codigo);
    ^
./entidade.h:32:11: error: unknown type name 'Teste'
    const Teste* buscarTeste(const std::string& codigo) const;
          ^
./entidade.h:39:17: error: use of undeclared identifier 'CasoDeTeste'
    std::vector<CasoDeTeste> casosDeTeste;
                ^
./entidade.h:42:37: error: unknown type name 'CasoDeTeste'
    void adicionarCasoDeTeste(const CasoDeTeste& novoCasoDeTeste);
                                    ^
./entidade.h:45:5: error: unknown type name 'CasoDeTeste'
    CasoDeTeste* buscarCasoDeTeste(const std::string& codigo);
    ^
./entidade.h:46:11: error: unknown type name 'CasoDeTeste'
    const CasoDeTeste* buscarCasoDeTeste(const std::string& codigo) const;
          ^
entidade.cpp:45:14: error: no member named 'cout' in namespace 'std'
        std::cout << "Nome: " << usuario.getNome() << std::endl;
        ~~~~~^
entidade.cpp:45:60: error: no member named 'endl' in namespace 'std'
        std::cout << "Nome: " << usuario.getNome() << std::endl;
                                                      ~~~~~^
entidade.cpp:46:14: error: no member named 'cout' in namespace 'std'
        std::cout << "Matrícula: " << usuario.getMatricula() << std::endl;
        ~~~~~^
entidade.cpp:46:71: error: no member named 'endl' in namespace 'std'
        std::cout << "Matrícula: " << usuario.getMatricula() << std::endl;
                                                                ~~~~~^
entidade.cpp:47:14: error: no member named 'cout' in namespace 'std'
        std::cout << "Senha: " << usuario.getSenha() << std::endl;
        ~~~~~^
entidade.cpp:47:62: error: no member named 'endl' in namespace 'std'
        std::cout << "Senha: " << usuario.getSenha() << std::endl;
                                                        ~~~~~^
entidade.cpp:48:14: error: no member named 'cout' in namespace 'std'
        std::cout << "Telefone: " << usuario.getTelefone() << std::endl;
        ~~~~~^
entidade.cpp:48:68: error: no member named 'endl' in namespace 'std'
        std::cout << "Telefone: " << usuario.getTelefone() << std::endl;
                                                              ~~~~~^
entidade.cpp:49:14: error: no member named 'cout' in namespace 'std'
        std::cout << std::endl;
        ~~~~~^
entidade.cpp:49:27: error: no member named 'endl' in namespace 'std'
        std::cout << std::endl;
                     ~~~~~^
entidade.cpp:53:43: error: unknown type name 'Teste'
void CadastroTestes::adicionarTeste(const Teste& novoTeste) {
                                          ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.







