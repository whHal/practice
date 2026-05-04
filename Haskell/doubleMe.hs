doubleMe :: Int -> Int
doubleMe x = x * 2

main :: IO ()
main = do
    putStr "Hello. Please input a number to double: " 
    input <- getLine
    putStrLn "" 
    let n = read input :: Int
    putStr "Your number doubled is: "
    print(doubleMe n)