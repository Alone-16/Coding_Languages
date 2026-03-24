def write_text_file(filename, content):
    with open(filename, 'a') as file:
        file.write(content + '\n')

filename = input()
content = input()

write_text_file(filename, content)