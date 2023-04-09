#include <iostream>
#include <string>

struct AcaoBolsa {
    std::string nomeCompanhia;
    std::string areaAtuacao;
    double valorAtual;
    double valorAnterior;
    double variacaoPorcentagem;
};

int main() {

    AcaoBolsa acao;
    std::cout << "Nome da compania: ";
    getline(std::cin, acao.nomeCompanhia);
    std::cout << "Área de atuação: ";
    getline(std::cin, acao.areaAtuacao);
    std::cout << "Valor atual da ação: ";
    std::cin >> acao.valorAtual;
    std::cout << "Valor anterior da ação: ";
    std::cin >> acao.valorAnterior;
    acao.variacaoPorcentagem = (acao.valorAtual - acao.valorAnterior) / acao.valorAnterior * 100;

    std::cout << std::endl;


    std::cout << "Nome da compania: " << acao.nomeCompanhia << std::endl;
    std::cout << "Área de atuação: " << acao.areaAtuacao << std::endl;
    std::cout << "Valor atual da ação: " << acao.valorAtual << std::endl;
    std::cout << "Valor anterior da ação: " << acao.valorAnterior << std::endl;
    std::cout << "Variação da ação em porcentagem: " << acao.variacaoPorcentagem << "%" << std::endl;

    std::cout << std::endl;

    AcaoBolsa acoes[3];
    for (int i = 0; i < 3; i++) {
        std::cout << "Preenchendo ação " << i+1 << ":" << std::endl;
        std::cout << "Nome da compania: ";
        getline(std::cin, acoes[i].nomeCompanhia);
        std::cout << "Área de atuação: ";
        getline(std::cin, acoes[i].areaAtuacao);
        std::cout << "Valor atual da ação: ";
        std::cin >> acoes[i].valorAtual;
        std::cout << "Valor anterior da ação: ";
        std::cin >> acoes[i].valorAnterior;
        acoes[i].variacaoPorcentagem = (acoes[i].valorAtual - acoes[i].valorAnterior) / acoes[i].valorAnterior * 100;
        std::cin.ignore(); 
        std::cout << std::endl;
    }

    std::cout << "Imprimindo ações preenchidas:" << std::endl;
    for (int i = 0; i < 3; i++) {
        std::cout << "Ação " << i+1 << ":" << std::endl;
        std::cout << "Nome da compania: " << acoes[i].nomeCompanhia << std::endl;
        std::cout << "Área de atuação: " << acoes[i].areaAtuacao << std::endl;
        std::cout << "Valor atual da ação: " << acoes[i].valorAtual << std::endl;
       
