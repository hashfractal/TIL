package study.server.controller;

import com.fasterxml.jackson.core.JsonProcessingException;
import com.fasterxml.jackson.databind.ObjectMapper;
import lombok.RequiredArgsConstructor;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;
import study.server.dto.searched.glycoprotein.identification.chartRowHistogram.*;
import study.server.service.SearchedGlycoproteinService;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;

@RestController
@RequiredArgsConstructor
@RequestMapping("/searched/glycoprotein")
public class SearchedGlycoproteinController {
	private final SearchedGlycoproteinService searchedGlycoproteinService;
	@GetMapping("/identification/chart/row/histogram/")
	public String getCRHistogram() throws JsonProcessingException {
		return searchedGlycoproteinService.getCRHistogramJson();
	}

	@GetMapping("/identification/chart/row/position/")
	public String CRPosition() throws JsonProcessingException {
		return searchedGlycoproteinService.getCRPositionJson();
	}

	@GetMapping("/quantification/chart/row/bar/")
	public String CRBar() throws JsonProcessingException {
		return searchedGlycoproteinService.getCRBarJson();
	}

	@GetMapping("/quantification/chart/row/position/")
	public String QCRPosition () throws JsonProcessingException {
		return searchedGlycoproteinService.getQCRPositionJson();
	}
}