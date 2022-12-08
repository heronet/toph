use std::io::stdin;

fn main() {
    let mut s_tcase = String::new();
    stdin().read_line(&mut s_tcase).expect("IO Error");
    let tcase = s_tcase.trim().parse::<u32>().expect("NaN");
    for i in 0..tcase {
        let mut s_nums = String::new(); 
        stdin().read_line(&mut s_nums).expect("IO Error");
        let nums: Vec<f32> = s_nums.trim()
            .split_whitespace()
            .map(|x| x.parse::<f32>().expect("NaN"))
            .collect();
        let l = nums[0];
        let w = nums[1];
        let d = nums[2];
        let frame = l * w;
        let pane = l * d;
        let free = (frame - pane) / 2.0;
        println!("Case {}: {:.2}", (i + 1), free);
    }
}
