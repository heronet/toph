use std::io::stdin;

fn main() {
    let mut stcase = String::new();
    stdin().read_line(&mut stcase).expect("IO ");
    let tcase: u32 = stcase.trim().parse().expect("NaN");

    for i in 0..tcase {
        let mut snums = String::new();
        stdin().read_line(&mut snums).expect("IO ");
        let nums: Vec<u128> = snums.split_whitespace()
            .map(|x| x.parse::<u128>().expect("NaN"))
            .collect();
        println!("Case #{}: {}", i+1, nums[0]+nums[1]);
    }
}
