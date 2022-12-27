- [Tipos de Grafos](https://www.ime.usp.br/~pf/mac5827/aulas/matching.html)
- [Digrafos](https://www.ime.usp.br/~pf/digraphs/)
- [Category Theory](https://en.wikipedia.org/wiki/Category_theory)
- [Isomorfismo](https://pt.wikipedia.org/wiki/Isomorfismo)
- [Hypergrafos](https://acervolima.com/hipergrafo-e-sua-representacao-matematica-discreta/)
- [Umap](https://pair-code.github.io/understanding-umap/)
- [Topologia computacional](https://stringfixer.com/pt/Computational_topology)
- [Graphic lambda calculus](https://arxiv.org/pdf/1305.5786.pdf)
- [Hipergrafos Direcionados e Computação Paralela](https://www.inf.ufpr.br/andre/files/AzevedoIbrahim2009.pdf)


O processo de configuração do DHCP para fornecer um endereço IP baseado na especificação (amarração) de um endereço MAC é conhecido como reserva de endereço.

Para configurar o DHCP para fornecer um endereço IP baseado na especificação (amarração) de um endereço MAC, é necessário especificar o endereço MAC do cliente e o endereço IP que o cliente deve receber.

Isso pode ser feito manualmente ou através de um arquivo de configuração. No Windows, o arquivo de configuração é o arquivo DHCP.INI. No Linux, o arquivo de configuração é o arquivo /etc/dhcp/dhcpd.conf. O arquivo de configuração contém uma lista de endereços MAC e endereços IP que devem ser atribuí

Para fornecer um endereço IP baseado na especificação (amarração) de um endereço MAC:
```bash
interface eth0
hwaddress ether AA:BB:CC:DD:EE:FF
fixed-address 192.168.1.100
```

Como funciona a atribuição de endereço IP baseado na especificação (amarração) de um endereço MAC ?
- Quando o DHCP recebe uma solicitação de um cliente, ele verifica se o endereço MAC do cliente está na lista de endereços MAC especificados no arquivo de configuração.
- Se o endereço MAC estiver na lista, o DHCP atribui o endereço IP especificado para o cliente.
- Se o endereço MAC não estiver na lista, o DHCP atribui um endereço IP ao cliente de