```ad-hint
SQL Injection é a vulnerabilidade mais encontrada em aplicações Web, que permite a um usuário mal-intencionado invadir bancos de dados associados a páginas Web explorando falhas de programação.
```

>Num perfil de ataque SQL Injection, o usuário mal-intencionado irá explorar as falhas da aplicação (provenientes de uma cláusula SQL sem tratamento de dados) para conseguir acesso ao sistema, procurando inserir valores que sejam sempre verdadeiros para o sistema.

```sql
select * from tabela_Usuarios where campo_email = '' OR 1=1; '/*' and campo_senha = '/*--';
```

Essa entrada de dados pelo usuário configura um caso de SQL Injection, pois mesmo os valores sendo incoerentes para conceder acesso a aplicação Web, quando o sistema for executado retornará sempre verdadeiro. O ataque ocorre devido aos caracteres especiais “ /* ” e “--” e também pela condição sempre verdadeira de “1 = 1”. Nesse caso os caracteres especiais serão interpretados como comentários de código para a linguagem SQL, anulando, portanto, o código após os caracteres especiais e verificando apenas a condição “1=1”, que sempre retornará verdadeiro, permitindo ao usuário acessar a aplicação sem saber o e-mail e senha corretos.

Em um caso mais grave, o usuário mal-intencionado pode já saber algumas informações do banco de dados, como nome de tabelas e colunas, para formular uma cláusula SQL Injection mais elaborada. O usuário mal-intencionado executa o comando da própria linguagem SQL “DROP TABLE senha”, onde excluirá qualquer tabela especificada. Também é possível alterar, adicionar e retornar dados já armazenado no banco de dados.

```sql
select * from tabela_Usuarios where campo_email = '123'; DROP TABLE senha; '/*' and campo_senha = '/*--';
```

