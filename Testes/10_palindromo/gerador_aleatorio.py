import random

def generate_test_case(case_number, n):
    input_filename = f"{case_number}.in"
    output_filename = f"{case_number}.out"
    
    characters = [random.choice('abcdefghijklmnopqrstuvwxyz') for _ in range(n)]
    test_string = ''.join(characters)
    
    with open(input_filename, 'w') as infile:
        infile.write(f"{n}\n")
        infile.write(test_string + "\n")
    
    ascii = [0] * 256
    for char in test_string:
        ascii[ord(char)] += 1
    
    cont = 0
    for count in ascii:
        if count % 2 == 1:
            cont += 1
            if cont == 2:
                break
    
    result = "Nao" if cont == 2 else "Sim"
    
    with open(output_filename, 'w') as outfile:
        outfile.write(result + "\n")

num_cases = int(input("Qual o número de casos de teste: "))
for i in range(1, num_cases + 1):
    n = int(input(f"Quantos caracteres no teste {i}? "))
    generate_test_case(i, n)

print("\nArquivos gerados com sucesso!")
