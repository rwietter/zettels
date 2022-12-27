#### JOIN tabelas com subquery
```sql
SELECT tabela_pagamento.valor AS total FROM (
	SELECT key, max(pagamento.valor) FROM pagamento
) AS tabela_pagamento, tabela_filme
WHERE tabela_pagamento.key = tabela_filme.key
GROUP BY x DESC
HAVING total > 200;
```

#### Examplo real
```sql
-- Obtenha o nome das pessoas que gastaram mais de R$ 200 com aluguel de filmes

SELECT cliente.cliente_id, cliente.primeiro_nome, SUM(pag.valor) AS total
FROM (
	SELECT pagamento.cliente_id, pagamento.valor
	FROM pagamento
) AS pag, cliente
WHERE pag.cliente_id = cliente.cliente_id
GROUP BY pag.cliente_id
HAVING total > 200;
```

---
#### Select subquery com retorno de coluna como select primário. Utiliza a tabela externa 'idioma' dentro da subquery
```sql
SELECT idioma.nome,
    (SELECT COUNT(filme.idioma_id)
		FROM filme
        WHERE idioma.idioma_id = filme.idioma_id
	) AS filmes
FROM
    idioma;
```

#### Simples

```sql
SELECT * FROM paciente WHERE paciente.cod_pac IN (
SELECT consulta.cod_pac FROM consulta WHERE consulta.cod_med IN
(SELECT medico.cod_med FROM medico WHERE medico.nome = 'Maria'));
```

```sql
(SELECT nome, salario FROM funcionario WHERE salario =
	(SELECT min(salario) from funcionario)
);
```

### Quando utilizar JOIN ou IN keys ?
- Deve-se usar JOIN de subquery quando é necessário trazer dados de diferentes tabelas.
- Deve-se utilizar IN ou EXISTS quando é apenas necessário filtrar por WHERE um dado.
- Não somar ou contar na query interna, trazer uma lista de valor e fazer no final