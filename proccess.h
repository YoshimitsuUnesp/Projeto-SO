// Estrutura para representar um processo (Bloco de Controle de Processos - BCP)
typedef struct {
    char nome[20];
    int estado;
    int prioridade;
    int tempoExecucao;
    // Outros campos relevantes para o processo
} Processo;

// Estrutura para representar um segmento de memória
typedef struct {
    int id;
    int tamanho;
    int status; // 0 para livre, 1 para ocupado
    // Outros campos relevantes para o segmento
} SegmentoMemoria;

// Estrutura para representar um semáforo
typedef struct {
    int estado; // 0 para disponível, 1 para bloqueado
    // Outros campos relevantes para o semáforo
} Semaforo;

typedef struct no
{
    Semaforo novo;
    struct no *proximo;
    struct no *anterior;
} ListaSemaforo;



void iniciaProcesso();
void processosEmExecucao();
void ocupacaoDeMemoria();