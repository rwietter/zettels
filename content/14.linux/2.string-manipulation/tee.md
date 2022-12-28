```ad-hint
tee é usado para ler a entrada de stdin e redirecionar a saída para a tela de exibição stdout, ou seja, bem como para os arquivos especificados ao mesmo tempo. É usado principalmente em conjunto com pipes e filters.
```

Este comando irá salvar o conteúdo de file em filenew.
```shell
cat file | tee filenew
```
