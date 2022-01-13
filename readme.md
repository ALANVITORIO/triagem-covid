---
marp: true
---

# Material de avaliação prática, Unicesumar
Nessa avaliação proposta pela faculdade, precisamos criar um sistema de triagem da covid-19.

O sistema deve conter, banco de dado para armazenamento de dados do paciente. Dentre os dados
* cpf
* nome
* idade
* sexo 
  
O sistema pontua da seguinte forma :

    - Tem Febre? (5 pontos)
    - Tem dor de cabeça? (1 ponto)
    - Tem secreção nasal ou espirros? (1 ponto)
    - Tem dor/irritação na garganta? (1 ponto)
    - Tem tosse seca? (3 pontos)
    - Tem dificuldade respiratória? (10 pontos)
    - Tem dores no corpo? (1 ponto)
    - Tem diarréia? (1 ponto)
    - Esteve em contato, nos últimos 14 dias, com um caso diagnosticado com COVID-19? (10 pontos)
    - Esteve em locais com grande aglomeração? (3 pontos)

O sistema deve conter, limite superior e inferior para cada sintoma identificado
O sistema deve indicar após a soma :
Para o risco baixo o total de pontos dos sintomas deverão ser de 0 a 9;
    Para o risco médio de 10 a 19 pontos;
    para o risco alto de 20 ou mais pontos.