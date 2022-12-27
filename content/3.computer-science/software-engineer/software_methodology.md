## Projetos

Engenharia de Software possui modelos e atividades. As quatro atividades básicas do processo — especificação, desenvolvimento, validação e evolução.

Dentro de cada atividade, existem outras atividades, por exemplo, na atividade de desenvolvimento tem: projeto de arquitetura, projeto de interface, projeto de componentes e projeto de banco de dados

<img src="./assets/s.jpg" width="60%"/>

Na parte de validação são feitas alguns testes para ver se cumpriu os requisitos, se o sistema está estável e sem bugs, testes de aceitação, componentes e testes de sistemas.

<img src="./assets/tests.jpg" width="60%"/>

---

### Resposta a mudanças

Mudanças requerem retrabalho em software já desenvolvido e testado, o que aumenta os custos. Para se antecipar a mudanças e evitar retrabalho, pode-se fazer um protótipo básico para refinar os requisitos do cliente, ou então alguma abrodagem Incremental.

---

## Modelos de Software

### Modelo Prototipagem

Este modelo visa que o cliente tenha uma iteracao entre o cliente e a equipe Dev. Os protótipos são de baixo custo e ajudam o cliente e refinar os requisitos, algumas funcionalidades complexas e requisitos funcionais podem ser deixadas de lado para não aumentar muito os custos, o protótipo pode ser reaproveitado no software original depois.

<img src="./assets/prototype.jpg" width="60%"/>

### Modelo Incremental

Entrega incremental (Figura 2.10) é uma abordagem para desenvolvimento de software na qual alguns dos incrementos desenvolvidos são entregues ao cliente e implantados para uso em um ambiente operacional. Em um processo de entrega incremental os clientes identificam, em linhas gerais, os serviços a serem fornecidos pelo sistema. Eles identificam quais dos serviços são mais e menos importantes para eles. A atribuição de serviços aos incrementos depende da ordem de prioridade dos serviços — os serviços de mais alta prioridade são implementados e entregues em primeiro lugar. Uma vez que os incrementos do sistema tenham sido identificados, os requisitos dos serviços a serem entregues no primeiro incremento são definidos em detalhes, e esse incremento é desenvolvido. Durante o desenvolvimento, podem ocorrer mais análises de requisitos para incrementos posteriores, mas mudanças nos requisitos do incremento atual não são aceitas. Quando um incremento é concluído e entregue, os clientes podem colocá-lo em operação. Isso significa aceitar a entrega antecipada de uma parte da funcionalidade do sistema.

Os requisitos são levantados também durante o teste de incremento com o cliente.

A diferença entre o protótipo e incremental é que no incremental o incremento já e o sistema real.

---

### Modelo Espiral

Aqui, o processo de software é representado como uma espiral, e não como uma sequência de atividades com alguns retornos de uma para outra. Cada volta na espiral representa uma fase do processo de software.

Dessa forma, a volta mais interna pode preocupar-se com a viabilidade do sistema; o ciclo seguinte, com definição de requisitos; o seguinte, com o projeto do sistema, e assim por diante.

Neste modelo, ele ajuda a prever riscos e sugere algum modelo como cascata, Prototipagem descartável

<img src="./assets/espiral.jpg" width="60%"/>

---

### RUP - Rational Unified Process

O RUP é um modelo de processo híbrido, pois ele é derivados de trabalhos sobre UML e reúne traços de vários processos de software, como Prototipagem e Incremental, Cascata entre outros.

O Rational Unified Process —RUP (KRUTCHEN, 2003) é um exemplo de modelo de processo moderno, derivado de trabalhos sobre a UML e o Unified Software Development Process associado (RUMBAUGH, et al., 1999; ARLOW e NEUSTADT, 2005). Incluí uma descrição aqui, pois é um bom exemplo de processo híbrido. Ele reúne elementos de todos os modelos de processo genéricos (Seção 2.1), ilustra boas práticas na especificação e no projeto (Seção 2.2) e apoia a prototipação e a entrega incremental (Seção 2.3). O RUP reconhece que os modelos de processo convencionais apresentam uma visão única do processo. Em contrapartida, o RUP é normalmente descrito em três perspectivas:

1. Uma perspectiva dinâmica, que mostra as fases do modelo ao longo do tempo.

2. Uma perspectiva estática, que mostra as atividades relizadas no processo.

3. Uma perspectiva prática, que sugere boas práticas a serem usadas durante o processo.

#### Fases do processo de software

1. Concepção. O objetivo da fase de concepção é estabelecer um business case para o sistema. Você deve identificar todas as entidades externas (pessoas e sistemas) que vão interagir com o sistema e definir as interações. Então, você deve usar essas informações para avaliar a contribuição do sistema para o negócio. Se essa contribuição for pequena, então o projeto poderá ser cancelado depois dessa fase.

2. Elaboração. As metas da fase de elaboração são desenvolver uma compreensão do problema dominante, estabelecer um framework da arquitetura para o sistema, desenvolver o plano do projeto e identificar os maiores riscos do projeto. No fim dessa fase, você deve ter um modelo de requisitos para o sistema, que pode ser um conjunto de casos de uso da UML, uma descrição da arquitetura ou um plano de desenvolvimento do software.

3. Construção. A fase de construção envolve projeto, programação e testes do sistema. Durante essa fase, as partes do sistema são desenvolvidas em paralelo e integradas. Na conclusão dessa fase, você deve ter um sistema de software já funcionando, bem como a documentação associada pronta para ser entregue aos usuários.

4. Transição. A fase final do RUP implica transferência do sistema da comunidade de desenvolvimento para a comunidade de usuários e em seu funcionamento em um ambiente real. Isso é ignorado na maioria dos modelos de processo de software, mas é, de fato, uma atividade cara e, às vezes, problemática. Na conclusão dessa fase, você deve ter um sistema de software documentado e funcionando corretamente em seu ambiente operacional.

#### No RUP, a iteração é apoiada de duas maneiras:

A visão estática do RUP prioriza as atividades que ocorrem durante o processo de desenvolvimento. Na descrição do RUP, essas são chamadas workflows, todos os workflows do RUP podem estar ativos em todas as fases do processo.

#### Boas práticas de acordo com RUP

1. Desenvolver software iterativamente. Planejar os incrementos do sistema com base nas prioridades do cliente e  desenvolver os recursos de alta prioridade no início do processo de desenvolvimento.
 
2. Gerenciar os requisitos. Documentar explicitamente os requisitos do cliente e acompanhar suas mudanças. Analisar o impacto das mudanças no sistema antes de aceitá-las.
 
3. Usar arquiteturas baseadas em componentes. Estruturar a arquitetura do sistema em componentes, conforme discutido anteriormente neste capítulo.
 
4. Modelar o software visualmente. Usar modelos gráficos da UML para apresentar visões estáticas e dinâmicas do software.
 
5. Verificar a qualidade do software. Assegurar que o software atenda aos padrões de qualidade organizacional. 
6. Controlar as mudanças do software. Gerenciar as mudanças do software, usando um sistema de gerenciamento  
de mudanças e procedimentos e ferramentas de gerenciamento de configuração.

<img src="./assets/rup1.jpg" width="60%"/>

<img src="./assets/rup2.jpg" width="60%"/>