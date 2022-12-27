## CPU-BOUND, IO-BOUND e MEMORY BOUND

### CPU-BOUND

É um processo que utiliza muita C.P.U. O seu tempo de execução é definido principalmente pelo tempo dos ciclos(clocks) do processador. Esse tipo de processo realiza poucas operações de leitura e gravação e é encontrado em aplicações cientificas e de muito cálculo. Por exemplo um processo que executa um programa de inversão de matriz é cpu-bound. Após ler alguns poucos dados, ele precisa apenas de processador. 

### IO-BOUND

Um processo é considerado I/O-Bound quando passa a maior parte do tempo no estado de espera, pois realiza um elevado número de operações de E/S. Também são classificadas como Disk-Bound (quando fazem muito acesso a disco) e Network-Bound (quando efetuam muita comunicação, gerando alto tráfego na rede).

Nesse caso, o tempo de execução é definido principalmente por estas operações. Por exemplo, um processo que executa um programa de cópia de arquivo é i/o-bound. Ele praticamente não utiliza processador, apenas acessa disco.

### MEMORY BOUND

Quando um ou mais processos estão prontos para serem executados, o sistema operacional deverá decidir qual deles que irá ser executado primeiro. Para saber essa prioridade, existe uma parte do sistema operacional responsável chamada de escalonador. O algoritmo usado para isso é chamado de algoritmo de escalonamento.

Em geral, o que se busca ao escalonar aplicações memory-bound é evitar falhas de páginas, o que pode ser alcançado escalonando os processos para os EPs com maiores quantidades de memória.


[CPU-BOUND, IO-BOUND e MEMORY BOUND](https://bdfatec.blogspot.com/2017/06/cpu-bound-io-bound-e-memory-bound.html)