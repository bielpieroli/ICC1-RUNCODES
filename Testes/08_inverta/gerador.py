import random

def generate_test_case(case_number, n):

    vector = random.sample(range(1, 1000000), n)
    

    input_filename = f"{case_number}.in"
    output_filename = f"{case_number}.out"
    

    with open(input_filename, 'w') as infile:
        infile.write(f"{n}\n")  
        infile.write(" ".join(map(str, vector)) + "\n")  
    

    with open(output_filename, 'w') as outfile:
        outfile.write(" ".join(map(str, reversed(vector))) + "\n")  


    print(f"\nCaso de teste {case_number}:")
    print("Vetor gerado:", vector)
    print("Vetor invertido:", list(reversed(vector)))

num_cases = int(input("Qual o número de casos de teste: "))

for i in range(1, num_cases + 1):
    n = int(input(f"Quantos elementos no vetor para o caso de teste {i}? "))
    
    generate_test_case(i, n)

print("\nArquivos gerados com sucesso!")
