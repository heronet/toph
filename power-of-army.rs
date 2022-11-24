use std::io;

fn main() {
    let mut s_tcase = String::new();
    io::stdin().read_line(&mut s_tcase).expect("Input Error");
    let tcase = s_tcase.trim().parse().expect("Error");

    for _ in 0..tcase {
        let mut s_noa = String::new();
        io::stdin().read_line(&mut s_noa).expect("Input Error");

        let mut line = String::new();
        io::stdin().read_line(&mut line).expect("Failed to read line");

        let inputs: Vec<u32> = line.split_whitespace()
            .map(|x| x.parse().expect("Not an integer!"))
            .collect();

        let power = inputs.iter().max().unwrap() - inputs.iter().min().unwrap();
        println!("{}", power);
    }
}
