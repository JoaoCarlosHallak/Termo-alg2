# Jogo Termo – Algoritmos 

Implementação em C++ do jogo **Termo**, desenvolvida como exercício da disciplina **Algoritmos** da **UFJF**.

O jogo segue fielmente as regras especificadas no enunciado, incluindo validação de palavras por dicionário, controle de tentativas e feedback visual das jogadas.

---

## 🎯 Descrição Geral

O **Jogo Termo** é um jogo de lógica em que:
- O computador escolhe uma palavra secreta de **6 letras**;
- O jogador tem até **10 tentativas** para adivinhar a palavra;
- A cada tentativa válida, o jogo fornece um feedback:
  - **`o`** → letra correta na posição correta;
  - **`x`** → letra correta, mas em posição incorreta;
- Cada letra da palavra secreta só pode ser utilizada **uma única vez** no feedback;
- Palpites inválidos **não contam tentativa**.

O jogo termina quando o jogador acerta a palavra ou quando as 10 tentativas se esgotam.

---


