function crivoDeEratostenes(n)
    local ehPrimo = {}
    for c = 0, n do
        ehPrimo[c] = true
    end
    ehPrimo[0] = false
    ehPrimo[1] = false

    for c = 2, math.floor(math.sqrt(n)) do
        if ehPrimo[c] then
            for j = c * c, n, c do
                ehPrimo[j] = false
            end
        end
    end

    local primos = {}
    for c = 2, n do
        if ehPrimo[c] then
            primos[#primos + 1] = c
        end
    end

    return primos
end

-- Teste
local limite = 30
local primos = crivoDeEratostenes(limite)

io.write("Primos até ", limite, ": ")
for c = 1, #primos do
    io.write(primos[c])
    if c < #primos then
        io.write(", ")
    end
end
print()