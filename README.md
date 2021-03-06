# Libft
Minha implementação de algumas funções da Biblioteca padrão C incluindo algumas adicionais.

## ToC
- [O que é o Libft?](#o-que---o-libft-)
- [O que está no Libft?](#o-que-est--no-libft)
- [Como funciona?](#como-funciona-)
- [DISCLAIMER](#disclaimer)

<a name="o-que---o-libft-"></a>
### O que é o Libft?
Libft é um projeto da [42](https://www.42sp.org.br "42sp") em que temos que recriar algumas funções da Biblioteca padrão C incluindo algumas adicionais que vão ser usadas para construir uma Biblioteca de funções úteis que serão usadas pelo resto do programa.

Refazemos as funções para que tenhamos um conhecimento aprofundado das estruturas e dos algorítimos básicos. Na 42 **não nos é permitido** usar a maioria das funções e Bibliotecas em nossos projetos. Por isso, com o passar do tempo vamos alimentando a nossa Biblioteca para que ela atenda a nossas necessidades.

<a name="o-que-est--no-libft"></a>
### O que está no Libft?
Como pode ver nas [Instruções do Projeto], temos:

1. **Part1 Functions:** Algumas funções da Biblioteca padrão C.
2. **Part2 Functions:** Funções que a 42 julga útil para futuros projetos que não estão na Biblioteca por padão ou que estão de outro modo.
3. **Bonus Functions** Funções que a 42 julga ser útil para manipulação de listas estruturadas.

[Part1](https://github.com/fecoelho/Libft/tree/master/Part1 "Part1") | [Part2](https://github.com/fecoelho/Libft/tree/master/Part2) | [Bonus](https://github.com/fecoelho/Libft/tree/master/Bonus)
:----:|:----:|:----:
ft_memset   | ft_substr     | ft_lstnew
ft_bzero    | ft_strjoin    | ft_lstadd_back
ft_memcpy   | ft_strtrim    | ft_lstsize
ft_memccpy  | ft_split      | ft_lstlast
ft_memmove  | ft_itoa       | ft_lstadd_back
ft_memchr   | ft_strmapi    | ft_lstdelone
ft_memcmp   | ft_putchar_fd | ft_lstclear
ft_strlen   | ft_putstr_fd  | ft_lstitter
ft_strlcpy  | ft_putendl_fd | ft_lstmap
ft_strlcat  | ft_putnbr_fd  |
ft_strchr   |
ft_strrchr  |
ft_strnstr  |
ft_strncmp  |
ft_atoi     |
ft_isalpha  |
ft_isdigit  |
ft_isalnum  |
ft_isascii  |
ft_isprint  |
ft_toupper  |
ft_tolower  |
ft_calloc   |
ft_strdup   |

<a name="como-funciona-"></a>
### Como funciona?
O objetivo é criar uma arquivo chamado **libft.a** para que eu possa usar a Biblioteca em projetos futuros.

Para criar essa Biblioteca, usamos um artifício que é o Makefile. Com ele podemos predefinir comandos que facilitam na hora da compilação.

Para testar, primeiro deve baixar o repositório:

    git clone https://github.com/fecoelho/Libft.git

Depois, é preciso entrar na pasta do projeto e usar os comandos do Make para compilar.

    cd Libft
    Make copy
Pronto! A biblioteca está pronta para ser usada.


Caso queira retirar os arquivos .c e .o, basta usar o comando Make hclean:

    Make hclean


<a name = "disclaimer"></a>
###### DISCLAIMER:
No [projeto original](https://github.com/fecoelho/Libft/blob/master/libft.subject.pdf "subject"), somos obrigados a enviar todos os arquivos na raiz do diretório e separar as funções bônus das obrigatórias na hora de compilar com o Make. Para uma melhor organização desse repositório e melhor entendimento, separei as funções em pastas, cada uma em sua respectiva pasta. Também compilo todas as funções juntas para que não seja necessário duas compilações.
