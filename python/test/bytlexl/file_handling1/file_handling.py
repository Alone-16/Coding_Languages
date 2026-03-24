def read_text_file(filename):
    with open(filename, 'r') as f:
        content = f.read()
        print(content)

filename = input()
read_text_file(filename)