import Data.Char (isAlpha)
import Data.List (group, sort)

main :: IO ()
main = interact $ \contents ->
    let ws       = map (filter isAlpha) (words contents)
        cleaned  = filter (not . null) ws
        lengths  = map length cleaned
        grouped  = [(x, length xs) | xs@(x:_) <- group (sort lengths)] 
        maxWidth = length (show(fst (last grouped)))
        pad len  = let s = show len
                   in replicate (maxWidth - length s) ' ' ++ s
    in '\n' : unlines [ pad len ++ " | " ++ replicate count '#' | (len, count) <- grouped]
    