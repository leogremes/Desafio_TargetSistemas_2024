-- executar com 'lua 2_string.lua'

io.write 'Digite uma string qualquer: '
local texto = io.read()
local qtd = 0

-- operador # retorna o tamanho da string
for i = 1, #texto do
	-- identificando o caractere da posição
	local char = texto:sub(i, i)
	if char == 'a' or char == 'A' then
		qtd = qtd + 1
	end
end

print('Existem ' .. tostring(qtd) .. " letras 'a' nessa string.")
