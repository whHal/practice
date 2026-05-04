import Text.Printf

fahrToCel :: Double -> Double
fahrToCel f  = (5/9) * (f - 32)

main :: IO ()
main = do
    putStrLn ""
    putStrLn "Fahrenheit | Celsius"
    putStrLn "----------------------"
    mapM_ printRow [0, 20 .. 300]
    putStrLn ""
  where 
    printRow f = printf "%10.1f | %7.2f\n" f (fahrToCel f)